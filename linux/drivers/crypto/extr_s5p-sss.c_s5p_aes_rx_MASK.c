
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_dev {int sg_src; } ;


 int FUNC_0 (struct s5p_aes_dev*,int ) ;
 int FUNC_1 (struct s5p_aes_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct s5p_aes_dev *VAR_0 )
{
 int VAR_1 = 0;

 FUNC_1(VAR_0);

 if (!FUNC_2(VAR_0->sg_src)) {
  VAR_1 = FUNC_0(VAR_0, FUNC_3(VAR_0->sg_src));
  if (!VAR_1)
   VAR_1 = 1;
 }

 return VAR_1;
}
