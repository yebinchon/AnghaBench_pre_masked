
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_4__ {unsigned int* ptr; } ;
struct radeon_cs_parser {int idx; TYPE_3__* rdev; TYPE_1__ ib; struct radeon_bo_list* relocs; struct radeon_cs_chunk* chunk_relocs; } ;
struct radeon_cs_chunk {unsigned int length_dw; } ;
struct radeon_bo_list {unsigned int gpu_offset; int robj; } ;
struct TYPE_5__ {int gpu_addr; } ;
struct TYPE_6__ {TYPE_2__ uvd; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_cs_parser*,int) ;
 int FUNC_3 (struct radeon_cs_parser*,int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct radeon_cs_parser *VAR_1,
          int VAR_2, int VAR_3,
          unsigned VAR_4[], bool *VAR_5)
{
 struct radeon_cs_chunk *VAR_6;
 struct radeon_bo_list *VAR_7;
 unsigned VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13;

 VAR_6 = VAR_1->chunk_relocs;
 VAR_10 = FUNC_2(VAR_1, VAR_2);
 VAR_8 = FUNC_2(VAR_1, VAR_3);
 if (VAR_8 >= VAR_6->length_dw) {
  FUNC_0("Relocs at %d after relocations chunk end %d !\n",
     VAR_8, VAR_6->length_dw);
  return -VAR_0;
 }

 VAR_7 = &VAR_1->relocs[(VAR_8 / 4)];
 VAR_11 = VAR_7->gpu_offset;
 VAR_12 = VAR_11 + FUNC_1(VAR_7->robj);
 VAR_11 += VAR_10;

 VAR_1->ib.ptr[VAR_2] = VAR_11 & 0xFFFFFFFF;
 VAR_1->ib.ptr[VAR_3] = VAR_11 >> 32;

 VAR_9 = FUNC_2(VAR_1, VAR_1->idx) >> 1;

 if (VAR_9 < 0x4) {
  if (VAR_12 <= VAR_11) {
   FUNC_0("invalid reloc offset %X!\n", VAR_10);
   return -VAR_0;
  }
  if ((VAR_12 - VAR_11) < VAR_4[VAR_9]) {
   FUNC_0("buffer (%d) to small (%d / %d)!\n", VAR_9,
      (unsigned)(VAR_12 - VAR_11), VAR_4[VAR_9]);
   return -VAR_0;
  }

 } else if (VAR_9 != 0x100) {
  FUNC_0("invalid UVD command %X!\n", VAR_9);
  return -VAR_0;
 }

 if ((VAR_11 >> 28) != ((VAR_12 - 1) >> 28)) {
  FUNC_0("reloc %LX-%LX crossing 256MB boundary!\n",
     VAR_11, VAR_12);
  return -VAR_0;
 }


 if ((VAR_9 == 0 || VAR_9 == 0x3) &&
     (VAR_11 >> 28) != (VAR_1->rdev->uvd.gpu_addr >> 28)) {
  FUNC_0("msg/fb buffer %LX-%LX out of 256MB segment!\n",
     VAR_11, VAR_12);
  return -VAR_0;
 }

 if (VAR_9 == 0) {
  if (*VAR_5) {
   FUNC_0("More than one message in a UVD-IB!\n");
   return -VAR_0;
  }
  *VAR_5 = 1;
  VAR_13 = FUNC_3(VAR_1, VAR_7->robj, VAR_10, VAR_4);
  if (VAR_13)
   return VAR_13;
 } else if (!*VAR_5) {
  FUNC_0("Message needed before other commands are send!\n");
  return -VAR_0;
 }

 return 0;
}
