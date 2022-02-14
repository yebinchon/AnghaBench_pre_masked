
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {char mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsdar*,int ,int ,char*,char,char) ;

__attribute__((used)) static void
FUNC_1(struct bsdar *VAR_1, char VAR_2)
{

 if (VAR_1->mode != '\0' && VAR_1->mode != VAR_2)
  FUNC_0(VAR_1, VAR_0, 0,
      "Can't specify both -%c and -%c", VAR_2, VAR_1->mode);
 VAR_1->mode = VAR_2;
}
