
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int flags; int assoc_len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct omap_aes_dev*,int) ;
 int FUNC_2 (struct omap_aes_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct omap_aes_dev *VAR_2, int VAR_3)
{
 FUNC_2(VAR_2, FUNC_0(0), VAR_3);
 FUNC_2(VAR_2, FUNC_0(1), 0);
 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_2, VAR_0, VAR_2->assoc_len);

 FUNC_1(VAR_2, VAR_3);
}
