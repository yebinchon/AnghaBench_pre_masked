
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sbefifo {int fsi_dev; } ;
typedef int raw_word ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sbefifo *VAR_0, int VAR_1, u32 VAR_2)
{
 __be32 VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_0->fsi_dev, VAR_1, &VAR_3,
    sizeof(VAR_3));
}
