
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int poolinfo; int r1buf_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct r1conf *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_1 / VAR_0;
 FUNC_0(FUNC_2(&VAR_4->r1buf_pool));

 return FUNC_1(&VAR_4->r1buf_pool, VAR_5, VAR_2,
       VAR_3, VAR_4->poolinfo);
}
