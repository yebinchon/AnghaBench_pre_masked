
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swcr_session {int swcr_lock; struct swcr_data* swcr_algorithms; } ;
struct swcr_data {scalar_t__ sw_alg; scalar_t__ sw_size; } ;
struct cryptop {int crp_etype; int crp_olen; int crp_flags; int * crp_buf; struct cryptodesc* crp_desc; int crp_session; } ;
struct cryptodesc {scalar_t__ crd_alg; struct cryptodesc* crd_next; } ;
typedef int device_t ;
 int VAR_0 ;
 int FUNC_0 (struct cryptop*) ;
 struct swcr_session* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct swcr_data*) ;
 int FUNC_5 (struct cryptodesc*,struct swcr_data*,int *,int ) ;
 int FUNC_6 (struct cryptop*) ;
 int FUNC_7 (struct cryptodesc*,struct swcr_data*,int *,int ) ;
 int FUNC_8 (struct cryptodesc*,struct swcr_data*,int *,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1, struct cryptop *VAR_2, int VAR_3)
{
 struct swcr_session *VAR_4 = ((void*)0);
 struct cryptodesc *VAR_5;
 struct swcr_data *VAR_6;
 size_t VAR_7;


 if (VAR_2 == ((void*)0))
  return VAR_0;

 if (VAR_2->crp_desc == ((void*)0) || VAR_2->crp_buf == ((void*)0)) {
  VAR_2->crp_etype = VAR_0;
  goto done;
 }

 VAR_4 = FUNC_1(VAR_2->crp_session);
 FUNC_2(&VAR_4->swcr_lock);


 for (VAR_5 = VAR_2->crp_desc; VAR_5; VAR_5 = VAR_5->crd_next) {
  for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_4->swcr_algorithms) &&
      VAR_4->swcr_algorithms[VAR_7].sw_alg != VAR_5->crd_alg; VAR_7++)
   ;


  if (VAR_7 == FUNC_4(VAR_4->swcr_algorithms)) {
   VAR_2->crp_etype = VAR_0;
   goto done;
  }
  VAR_6 = &VAR_4->swcr_algorithms[VAR_7];
  switch (VAR_6->sw_alg) {
  case 148:
  case 165:
  case 153:
  case 151:
  case 128:
  case 141:
  case 156:
  case 159:
  case 152:
  case 150:
   if ((VAR_2->crp_etype = FUNC_8(VAR_5, VAR_6,
       VAR_2->crp_buf, VAR_2->crp_flags)) != 0)
    goto done;
   break;
  case 144:
   VAR_2->crp_etype = 0;
   break;
  case 146:
  case 138:
  case 135:
  case 133:
  case 131:
  case 129:
  case 140:
  case 143:
  case 145:
  case 137:
  case 147:
  case 139:
  case 136:
  case 134:
  case 132:
  case 130:
  case 155:
  case 154:
  case 142:
   if ((VAR_2->crp_etype = FUNC_5(VAR_5, VAR_6,
       VAR_2->crp_buf, VAR_2->crp_flags)) != 0)
    goto done;
   break;

  case 158:
  case 157:
  case 164:
  case 163:
  case 162:
  case 161:
  case 160:
   VAR_2->crp_etype = FUNC_6(VAR_2);
   goto done;

  case 149:
   if ((VAR_2->crp_etype = FUNC_7(VAR_5, VAR_6,
       VAR_2->crp_buf, VAR_2->crp_flags)) != 0)
    goto done;
   else
    VAR_2->crp_olen = (int)VAR_6->sw_size;
   break;

  default:

   VAR_2->crp_etype = VAR_0;
   goto done;
  }
 }

done:
 if (VAR_4)
  FUNC_3(&VAR_4->swcr_lock);
 FUNC_0(VAR_2);
 return 0;
}
