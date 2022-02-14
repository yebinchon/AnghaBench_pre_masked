
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mce {int status; int bank; } ;
typedef enum context { ____Placeholder_context } context ;
struct TYPE_2__ {int succor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_1 (int,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct mce *VAR_6, enum context VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6->bank);
 u32 VAR_9, VAR_10;







 if (!VAR_5.succor)
  return VAR_2;

 if (FUNC_1(VAR_8, &VAR_9, &VAR_10))
  return VAR_2;


 if ((VAR_9 & VAR_3) &&
     (VAR_6->status & VAR_4) &&
     (VAR_7 == VAR_0))
  return VAR_2;


 return VAR_1;
}
