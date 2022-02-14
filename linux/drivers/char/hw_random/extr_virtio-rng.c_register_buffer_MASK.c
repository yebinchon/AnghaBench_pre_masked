
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtrng_info {int vq; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,int *,size_t) ;
 int FUNC_1 (int ,struct scatterlist*,int,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct virtrng_info *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 struct scatterlist VAR_4;

 FUNC_0(&VAR_4, VAR_2, VAR_3);


 FUNC_1(VAR_1->vq, &VAR_4, 1, VAR_2, VAR_0);

 FUNC_2(VAR_1->vq);
}
