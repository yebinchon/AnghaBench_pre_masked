
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ) ;
 scalar_t__ FUNC_1 (struct psmouse*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = -VAR_0;


 if (FUNC_0(VAR_6, VAR_1))
  goto out;
 if (FUNC_1(VAR_6, VAR_3, &VAR_8))
  goto out;
 if (FUNC_1(VAR_6, VAR_4, &VAR_9))
  goto out;
 if (FUNC_1(VAR_6, VAR_5, &VAR_10))
  goto out;
 *VAR_7 = (VAR_8 << 16) | (VAR_9 << 8) | VAR_10;
 VAR_11 = 0;
out:
 FUNC_0(VAR_6, VAR_2);
 return VAR_11;
}
