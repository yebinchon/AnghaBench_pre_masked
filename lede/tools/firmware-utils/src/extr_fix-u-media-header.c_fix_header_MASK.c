
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct u_media_header {char* ih_name; int ih_UMedia_LoadDefault; void* ih_hcrc; int ih_UMedia_imageType; void* ih_UMedia_boardID; void* ih_UMedia_magic; void* ih_magic; } ;
struct TYPE_3__ {int file_size; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (void*) ;
 int VAR_10 ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_11;
 char *VAR_12;
 uint32_t VAR_13, VAR_14;
 struct u_media_header *VAR_15;
 int VAR_16 = VAR_0;

 VAR_11 = VAR_8.file_size;
 if (VAR_11 < sizeof(*VAR_15)) {
  FUNC_1("invalid input file\n");
  return VAR_16;
 }

 VAR_12 = FUNC_5(VAR_11);
 if (!VAR_12) {
  FUNC_1("no memory for buffer\n");
  goto out;
 }

 VAR_16 = FUNC_7(&VAR_8, VAR_12);
 if (VAR_16)
  goto out_free_buf;

 VAR_15 = (struct u_media_header *) VAR_12;
 if (FUNC_6(VAR_15->ih_magic) != VAR_2) {
  FUNC_1("invalid input file, bad magic\n");
  goto out_free_buf;
 }


 VAR_14 = FUNC_6(VAR_15->ih_hcrc);
 VAR_15->ih_hcrc = 0;
 VAR_13 = FUNC_2((unsigned char *)VAR_15, sizeof(*VAR_15));
 if (VAR_13 != VAR_14) {
  FUNC_1("invalid input file, bad header CRC\n");
  goto out_free_buf;
 }

 VAR_15->ih_name[VAR_3 - VAR_4 - 1] = '\0';


 VAR_15->ih_UMedia_magic = FUNC_4(VAR_5);
 VAR_15->ih_UMedia_boardID = FUNC_4(VAR_6);
 VAR_15->ih_UMedia_imageType = VAR_9;
 VAR_15->ih_UMedia_LoadDefault = (VAR_7) ? 1 : 0;


 VAR_13 = FUNC_2((unsigned char *)VAR_15, sizeof(*VAR_15));
 VAR_15->ih_hcrc = FUNC_4(VAR_13);

 VAR_16 = FUNC_8(VAR_12, VAR_11);
 if (VAR_16)
  goto out_free_buf;

 FUNC_0("U-Media header fixed in \"%s\"", VAR_10);

 VAR_16 = VAR_1;

out_free_buf:
 FUNC_3(VAR_12);
out:
 return VAR_16;
}
