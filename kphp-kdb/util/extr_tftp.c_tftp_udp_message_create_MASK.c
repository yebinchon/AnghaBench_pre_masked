
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_message {scalar_t__ next; int raw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct udp_message* FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_4 () ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct udp_message *FUNC_5 (int VAR_9) {
  switch (FUNC_4 ()) {
  case 128:
    VAR_5++;
    break;
  case 132:
    VAR_1++;
    break;
  case 131:
    VAR_2++;
    break;
  case 129:
    VAR_4++;
    break;
  case 130:
    VAR_3++;
    break;
  }
  VAR_7++;
  VAR_6 += VAR_9;
  if (VAR_8 >= 3) {
    FUNC_1 (VAR_0, VAR_0 + VAR_9);
  }
  struct udp_message *VAR_10 = FUNC_2 (sizeof (struct udp_message));
  FUNC_0 (FUNC_3 (&VAR_10->raw, VAR_0, VAR_9) == VAR_9);
  VAR_10->next = 0;
  return VAR_10;
}
