
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct cryptocap {size_t cc_session_size; int cc_flags; int cc_dev; scalar_t__ cc_sessions; } ;
typedef TYPE_1__* crypto_session_t ;
struct TYPE_6__ {void* softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 struct cryptocap* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (struct cryptocap*) ;
 size_t FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (void*,size_t) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;

void
FUNC_9(crypto_session_t VAR_5)
{
 struct cryptocap *VAR_6;
 void *VAR_7;
 size_t VAR_8;
 u_int32_t VAR_9;

 if (VAR_5 == ((void*)0))
  return;

 FUNC_1();

 VAR_9 = FUNC_5(VAR_5);
 FUNC_3(VAR_9 < VAR_3,
     ("bogus crypto_session %p hid %u", VAR_5, VAR_9));
 VAR_6 = &VAR_2[VAR_9];

 VAR_7 = VAR_5->softc;
 VAR_8 = VAR_6->cc_session_size;

 if (VAR_6->cc_sessions)
  VAR_6->cc_sessions--;


 FUNC_0(VAR_6->cc_dev, VAR_5);

 FUNC_6(VAR_7, VAR_8);
 FUNC_7(VAR_7, VAR_1);
 FUNC_8(VAR_4, VAR_5);

 if (VAR_6->cc_flags & VAR_0)
  FUNC_4(VAR_6);

 FUNC_2();
}
