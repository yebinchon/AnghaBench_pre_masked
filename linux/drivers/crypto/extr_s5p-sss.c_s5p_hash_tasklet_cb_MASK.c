
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_dev {int hash_flags; int hash_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct s5p_aes_dev*,int *) ;
 int FUNC_3 (struct s5p_aes_dev*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 struct s5p_aes_dev *VAR_5 = (struct s5p_aes_dev *)VAR_4;

 if (!FUNC_5(VAR_0, &VAR_5->hash_flags)) {
  FUNC_2(VAR_5, ((void*)0));
  return;
 }

 if (FUNC_5(VAR_2, &VAR_5->hash_flags)) {
  if (FUNC_4(VAR_1,
           &VAR_5->hash_flags)) {
   FUNC_3(VAR_5);
  }

  if (FUNC_4(VAR_3,
           &VAR_5->hash_flags)) {

   FUNC_0(VAR_2, &VAR_5->hash_flags);
   goto finish;
  }
 }

 return;

finish:

 FUNC_1(VAR_5->hash_req, 0);


 if (!FUNC_5(VAR_0, &VAR_5->hash_flags))
  FUNC_2(VAR_5, ((void*)0));
}
