
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_rom {int magic; int ram_header_offset; int surface0_area_size; int draw_area_offset; int pages_offset; int num_io_pages; int log_level; int compression_level; int update_id; int id; } ;
struct qxl_device {int vram_size; struct qxl_rom* rom; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static bool FUNC_2(struct qxl_device *VAR_0)
{
 struct qxl_rom *VAR_1 = VAR_0->rom;

 if (VAR_1->magic != 0x4f525851) {
  FUNC_0("bad rom signature %x\n", VAR_1->magic);
  return 0;
 }

 FUNC_1("Device Version %d.%d\n", VAR_1->id, VAR_1->update_id);
 FUNC_1("Compression level %d log level %d\n", VAR_1->compression_level,
   VAR_1->log_level);
 FUNC_1("%d io pages at offset 0x%x\n",
   VAR_1->num_io_pages, VAR_1->pages_offset);
 FUNC_1("%d byte draw area at offset 0x%x\n",
   VAR_1->surface0_area_size, VAR_1->draw_area_offset);

 VAR_0->vram_size = VAR_1->surface0_area_size;
 FUNC_1("RAM header offset: 0x%x\n", VAR_1->ram_header_offset);
 return 1;
}
