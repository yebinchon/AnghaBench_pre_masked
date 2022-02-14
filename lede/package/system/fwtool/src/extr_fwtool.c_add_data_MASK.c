
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_trailer {int crc32; int magic; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct fwimage_trailer*) ;
 int FUNC_1 (struct fwimage_trailer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int,int,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (struct fwimage_trailer*,char*,int) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4)
{
 struct fwimage_trailer VAR_5 = {
  .magic = FUNC_2(VAR_0),
  .crc32 = ~0,
 };
 int VAR_6 = 0;
 int VAR_7 = 0;

 VAR_1 = FUNC_5(VAR_4, "r+");
 if (!VAR_1) {
  FUNC_8("Failed to open firmware file\n");
  return 1;
 }

 while (1) {
  char VAR_8[512];
  int VAR_9;

  VAR_9 = FUNC_6(VAR_8, 1, sizeof(VAR_8), VAR_1);
  if (!VAR_9)
   break;

  VAR_6 += VAR_9;
  FUNC_9(&VAR_5, VAR_8, VAR_9);
 }

 if (VAR_2)
  VAR_7 = FUNC_0(&VAR_5);
 else if (VAR_3)
  VAR_7 = FUNC_1(&VAR_5);

 if (VAR_7) {
  FUNC_3(VAR_1);
  FUNC_7(FUNC_4(VAR_1), VAR_6);
 }

 return VAR_7;
}
