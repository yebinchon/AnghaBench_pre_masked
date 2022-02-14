
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scatterlist*,int ,int ,int,size_t*,struct scatterlist**,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_2, size_t VAR_3,
        size_t VAR_4, struct scatterlist **VAR_5)
{

 size_t VAR_6[2];
 int VAR_7[2];

 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_4;

 return FUNC_0(VAR_2, 0, 0, 2, VAR_6, VAR_5,
   VAR_7, VAR_0);
}
