
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 char* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_2, const char *VAR_3)
{
 struct stat VAR_4;
 const char *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5)
  return;

 if (!FUNC_1(VAR_3, &VAR_4))
  VAR_1 += VAR_4.st_size;
 FUNC_2("%s: %s", VAR_5, VAR_3);
 VAR_0++;
}
