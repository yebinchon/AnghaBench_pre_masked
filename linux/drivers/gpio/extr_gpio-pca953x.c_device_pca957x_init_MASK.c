
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pca953x_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pca953x_chip*) ;
 int VAR_1 ;
 int FUNC_1 (struct pca953x_chip*,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct pca953x_chip*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct pca953x_chip *VAR_2, u32 VAR_3)
{
 int VAR_4;
 u8 VAR_5[VAR_0];

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  goto out;


 FUNC_2(VAR_5, 0x02, FUNC_0(VAR_2));
 VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_5);
 if (VAR_4)
  goto out;

 return 0;
out:
 return VAR_4;
}
