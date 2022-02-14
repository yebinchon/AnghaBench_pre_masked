
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {int dummy; } ;
struct cryptocap {int cc_flags; scalar_t__ cc_sessions; int * cc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct cryptocap* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct cryptocap*,struct cryptoini const*) ;

__attribute__((used)) static struct cryptocap *
FUNC_2(const struct cryptoini *VAR_5, int VAR_6)
{
 struct cryptocap *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0();




 if (VAR_6 & VAR_1)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;
 VAR_8 = ((void*)0);
again:
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_7 = &VAR_3[VAR_10];





  if (VAR_7->cc_dev == ((void*)0) ||
      (VAR_7->cc_flags & VAR_0) ||
      (VAR_7->cc_flags & VAR_9) == 0)
   continue;


  if (FUNC_1(VAR_7, VAR_5)) {
   if (VAR_8 == ((void*)0) ||
       VAR_7->cc_sessions < VAR_8->cc_sessions)
    VAR_8 = VAR_7;
  }
 }
 if (VAR_8 == ((void*)0) && VAR_9 == VAR_1 &&
     (VAR_6 & VAR_2)) {

  VAR_9 = VAR_2;
  goto again;
 }
 return VAR_8;
}
