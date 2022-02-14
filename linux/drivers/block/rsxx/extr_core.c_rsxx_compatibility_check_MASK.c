
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct rsxx_cardinfo *VAR_2)
{
 unsigned char VAR_3;

 FUNC_0(VAR_2->dev, VAR_0, &VAR_3);

 if (VAR_3 > VAR_1)
  return -1;
 return 0;
}
