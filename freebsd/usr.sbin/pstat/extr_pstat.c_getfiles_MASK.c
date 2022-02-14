
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int * VAR_2 ;
 struct xfile* FUNC_1 (size_t) ;
 int FUNC_2 (int*,int,struct xfile*,size_t*,int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct xfile **VAR_3, size_t *VAR_4)
{
 struct xfile *VAR_5;
 size_t VAR_6;
 int VAR_7[2];





 if (VAR_2 != ((void*)0))
  FUNC_0(1, "files on dead kernel, not implemented");

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_1;
 if (FUNC_2(VAR_7, 2, ((void*)0), &VAR_6, ((void*)0), 0) == -1) {
  FUNC_3("sysctl: KERN_FILE");
  return (-1);
 }
 if ((VAR_5 = FUNC_1(VAR_6)) == ((void*)0))
  FUNC_0(1, "malloc");
 if (FUNC_2(VAR_7, 2, VAR_5, &VAR_6, ((void*)0), 0) == -1) {
  FUNC_3("sysctl: KERN_FILE");
  return (-1);
 }
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return (0);
}
