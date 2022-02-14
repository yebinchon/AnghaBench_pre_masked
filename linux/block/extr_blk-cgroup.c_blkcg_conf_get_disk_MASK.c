
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gendisk* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 struct gendisk* FUNC_2 (int ,int*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (struct gendisk*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,unsigned int*,unsigned int*,int*) ;

struct gendisk *FUNC_7(char **VAR_2)
{
 char *VAR_3 = *VAR_2;
 unsigned int VAR_4, VAR_5;
 struct gendisk *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_6(VAR_3, "%u:%u%n", &VAR_4, &VAR_5, &VAR_7) != 2)
  return FUNC_0(-VAR_0);

 VAR_3 += VAR_7;
 if (!FUNC_3(*VAR_3))
  return FUNC_0(-VAR_0);
 VAR_3 = FUNC_5(VAR_3);

 VAR_6 = FUNC_2(FUNC_1(VAR_4, VAR_5), &VAR_8);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 if (VAR_8) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_1);
 }

 *VAR_2 = VAR_3;
 return VAR_6;
}
