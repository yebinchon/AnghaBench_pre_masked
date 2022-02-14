
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_file {int kf_fd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct kinfo_file*) ;
 int FUNC_2 () ;
 struct kinfo_file* FUNC_3 (int ,int*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct kinfo_file *VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_1 = FUNC_3(FUNC_2(), &VAR_2);
 if (VAR_1 == ((void*)0))
  FUNC_0("kinfo_getfile");
 VAR_4 = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3].kf_fd > VAR_4)
   VAR_4 = VAR_1[VAR_3].kf_fd;
 FUNC_1(VAR_1);
 return (VAR_4);
}
