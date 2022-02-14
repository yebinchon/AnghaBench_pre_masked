
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashfile {int check_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct hashfile* FUNC_1 (int,char const*) ;
 int FUNC_2 (char const*,int ) ;

struct hashfile *FUNC_3(const char *VAR_2)
{
 int VAR_3, VAR_4;
 struct hashfile *VAR_5;

 VAR_3 = FUNC_2("/dev/null", VAR_1);
 if (VAR_3 < 0)
  FUNC_0("unable to open /dev/null");
 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4 < 0)
  FUNC_0("unable to open '%s'", VAR_2);
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_5->check_fd = VAR_4;
 return VAR_5;
}
