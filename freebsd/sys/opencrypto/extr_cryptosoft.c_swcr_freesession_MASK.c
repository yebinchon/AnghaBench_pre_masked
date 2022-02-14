
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swcr_session {struct swcr_data* swcr_algorithms; int swcr_lock; } ;
struct swcr_data {int sw_alg; int sw_ictx; struct auth_hash* sw_axf; int sw_octx; int sw_klen; int sw_kschedule; struct enc_xform* sw_exf; } ;
struct enc_xform {int (* zerokey ) (int *) ;} ;
struct auth_hash {int ctxsize; } ;
typedef int device_t ;
typedef int crypto_session_t ;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct swcr_session* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (struct swcr_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_1, crypto_session_t VAR_2)
{
 struct swcr_session *VAR_3;
 struct swcr_data *VAR_4;
 struct enc_xform *VAR_5;
 struct auth_hash *VAR_6;
 size_t VAR_7;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_4(&VAR_3->swcr_lock);
 for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_3->swcr_algorithms); VAR_7++) {
  VAR_4 = &VAR_3->swcr_algorithms[VAR_7];

  switch (VAR_4->sw_alg) {
  case 148:
  case 165:
  case 153:
  case 151:
  case 128:
  case 141:
  case 156:
  case 159:
  case 158:
  case 157:
  case 152:
  case 144:
  case 150:
  case 161:
   VAR_5 = VAR_4->sw_exf;

   if (VAR_4->sw_kschedule)
    VAR_5->zerokey(&(VAR_4->sw_kschedule));
   break;

  case 146:
  case 138:
  case 135:
  case 133:
  case 131:
  case 129:
  case 140:
  case 143:
  case 160:
   VAR_6 = VAR_4->sw_axf;

   if (VAR_4->sw_ictx) {
    FUNC_0(VAR_4->sw_ictx, VAR_6->ctxsize);
    FUNC_3(VAR_4->sw_ictx, VAR_0);
   }
   if (VAR_4->sw_octx) {
    FUNC_0(VAR_4->sw_octx, VAR_6->ctxsize);
    FUNC_3(VAR_4->sw_octx, VAR_0);
   }
   break;

  case 145:
  case 137:
   VAR_6 = VAR_4->sw_axf;

   if (VAR_4->sw_ictx) {
    FUNC_0(VAR_4->sw_ictx, VAR_6->ctxsize);
    FUNC_3(VAR_4->sw_ictx, VAR_0);
   }
   if (VAR_4->sw_octx) {
    FUNC_0(VAR_4->sw_octx, VAR_4->sw_klen);
    FUNC_3(VAR_4->sw_octx, VAR_0);
   }
   break;

  case 155:
  case 154:
  case 147:
  case 142:
  case 139:
  case 136:
  case 134:
  case 132:
  case 130:
  case 164:
  case 163:
  case 162:
   VAR_6 = VAR_4->sw_axf;

   if (VAR_4->sw_ictx) {
    FUNC_2(VAR_4->sw_ictx, VAR_6->ctxsize);
    FUNC_3(VAR_4->sw_ictx, VAR_0);
   }
   break;

  case 149:

   break;
  }
 }
}
