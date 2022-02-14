
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct a3d {scalar_t__ length; unsigned char mode; int bads; int gameport; int reads; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,scalar_t__) ;
 int FUNC_1 (struct a3d*,unsigned char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned char*) ;
 struct a3d* FUNC_3 (struct gameport*) ;

__attribute__((used)) static void FUNC_4(struct gameport *VAR_1)
{
 struct a3d *VAR_2 = FUNC_3(VAR_1);
 unsigned char VAR_3[VAR_0];

 VAR_2->reads++;
 if (FUNC_2(VAR_2->gameport, VAR_2->length, VAR_3) != VAR_2->length ||
     VAR_3[0] != VAR_2->mode || FUNC_0(VAR_3, VAR_2->length))
  VAR_2->bads++;
 else
  FUNC_1(VAR_2, VAR_3);
}
