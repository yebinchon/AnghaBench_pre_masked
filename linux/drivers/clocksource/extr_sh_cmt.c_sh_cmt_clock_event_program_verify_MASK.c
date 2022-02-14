
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_cmt_channel {int next_match_value; int max_match_value; int match_value; int index; TYPE_2__* cmt; int flags; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct sh_cmt_channel*,int*) ;
 int FUNC_2 (struct sh_cmt_channel*,int) ;

__attribute__((used)) static void FUNC_3(struct sh_cmt_channel *VAR_2,
           int VAR_3)
{
 u32 VAR_4 = VAR_2->next_match_value;
 u32 VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8;

 VAR_7 = FUNC_1(VAR_2, &VAR_8);
 VAR_2->flags |= VAR_0;

 if (VAR_8) {




  VAR_2->flags |= VAR_1;
  return;
 }

 if (VAR_3)
  VAR_7 = 0;

 do {



  VAR_5 = VAR_7 + VAR_4 + VAR_6;
  if (VAR_5 > VAR_2->max_match_value)
   VAR_5 = VAR_2->max_match_value;

  FUNC_2(VAR_2, VAR_5);

  VAR_7 = FUNC_1(VAR_2, &VAR_8);
  if (VAR_8 && (VAR_5 > VAR_2->match_value)) {






   VAR_2->flags |= VAR_1;
   break;
  }

  if (VAR_8) {






   VAR_2->match_value = VAR_5;
   break;
  }


  if (VAR_7 < VAR_5) {





   VAR_2->match_value = VAR_5;
   break;
  }







  if (VAR_6)
   VAR_6 <<= 1;
  else
   VAR_6 = 1;

  if (!VAR_6)
   FUNC_0(&VAR_2->cmt->pdev->dev, "ch%u: too long delay\n",
     VAR_2->index);

 } while (VAR_6);
}
