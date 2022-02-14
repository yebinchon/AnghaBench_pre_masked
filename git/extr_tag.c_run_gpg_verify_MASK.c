
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signature_check {int dummy; } ;
typedef int sigc ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,size_t,char const*,unsigned long,struct signature_check*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct signature_check*,int ,int) ;
 size_t FUNC_3 (char const*,unsigned long) ;
 int FUNC_4 (struct signature_check*,unsigned int) ;
 int FUNC_5 (struct signature_check*) ;
 int FUNC_6 (int,char const*,size_t) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, unsigned long VAR_3, unsigned VAR_4)
{
 struct signature_check VAR_5;
 size_t VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = FUNC_3(VAR_2, VAR_3);

 if (VAR_3 == VAR_6) {
  if (VAR_4 & VAR_1)
   FUNC_6(1, VAR_2, VAR_6);
  return FUNC_1("no signature found");
 }

 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_2 + VAR_6,
    VAR_3 - VAR_6, &VAR_5);

 if (!(VAR_4 & VAR_0))
  FUNC_4(&VAR_5, VAR_4);

 FUNC_5(&VAR_5);
 return VAR_7;
}
