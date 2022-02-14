
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tsdn_t ;
struct TYPE_2__ {int mtx; int accumbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

bool
FUNC_6(tsdn_t *VAR_4, uint64_t VAR_5) {
 FUNC_3(VAR_1);

 bool VAR_6;
 uint64_t VAR_7, VAR_8;
 FUNC_4(VAR_4, &VAR_2.mtx);
 VAR_7 = VAR_2.accumbytes;
 VAR_8 = VAR_7 + VAR_5;
 VAR_6 = (VAR_8 >= VAR_3);
 if (VAR_6) {
  VAR_8 %= VAR_3;
 }
 VAR_2.accumbytes = VAR_8;
 FUNC_5(VAR_4, &VAR_2.mtx);

 return VAR_6;
}
