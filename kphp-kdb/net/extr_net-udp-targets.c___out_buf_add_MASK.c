
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {scalar_t__ total_bytes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct raw_message VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct raw_message*,int*,int) ;
 int FUNC_3 (struct raw_message*,struct raw_message*) ;

void FUNC_4 (struct raw_message *VAR_7, int VAR_8) {
  VAR_0 += VAR_7->total_bytes;
  if (!VAR_2) {
    VAR_3 = *VAR_7;

    VAR_1 = VAR_7->total_bytes;
    VAR_4 = 1;
    VAR_5 = VAR_7->total_bytes;
    VAR_6 = VAR_8;
    VAR_2 = 1;
    FUNC_1 (VAR_7, 0, sizeof (*VAR_7));
  } else {


    int VAR_9 = VAR_7->total_bytes;
    FUNC_2 (&VAR_3, &VAR_9, 4);
    FUNC_3 (&VAR_3, VAR_7);

    VAR_4 ++;
    VAR_5 += VAR_9 + 4;
    FUNC_0 ((VAR_5) == VAR_3.total_bytes);
  }
}
