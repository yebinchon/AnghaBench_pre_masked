
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int id; } ;
typedef int model_num ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int ,int) ;
 int FUNC_1 (char const* const*,int,unsigned char*) ;
 int FUNC_2 (char*,char*,char const* const) ;

__attribute__((used)) static int FUNC_3(const struct ata_device *VAR_2, char *VAR_3,
          const char * const VAR_4[])
{
 unsigned char VAR_5[VAR_1 + 1];
 int VAR_6;

 FUNC_0(VAR_2->id, VAR_5, VAR_0, sizeof(VAR_5));

 VAR_6 = FUNC_1(VAR_4, -1, VAR_5);
 if (VAR_6 >= 0) {
  FUNC_2("%s is not supported for %s\n", VAR_3, VAR_4[VAR_6]);
  return 1;
 }
 return 0;
}
