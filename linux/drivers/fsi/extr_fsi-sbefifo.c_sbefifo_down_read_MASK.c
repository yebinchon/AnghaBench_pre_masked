
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbefifo {int fsi_dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct sbefifo *VAR_1, __be32 *VAR_2)
{
 return FUNC_0(VAR_1->fsi_dev, VAR_0, VAR_2,
          sizeof(*VAR_2));
}
