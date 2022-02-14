
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct isar_hw {TYPE_2__* ch; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct TYPE_4__ {int mml; int dpath; TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct isar_hw*,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_2(struct isar_hw *VAR_4)
{
 u8 VAR_5;
 int VAR_6;


 VAR_5 = 61;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {

  FUNC_1(VAR_4, (VAR_6 ? VAR_1 : VAR_0) |
     VAR_2, 4, 1, &VAR_5);
  VAR_4->ch[VAR_6].mml = VAR_5;
  VAR_4->ch[VAR_6].bch.state = 0;
  VAR_4->ch[VAR_6].dpath = VAR_6 + 1;
  FUNC_0(&VAR_4->ch[VAR_6], VAR_3);
 }
}
