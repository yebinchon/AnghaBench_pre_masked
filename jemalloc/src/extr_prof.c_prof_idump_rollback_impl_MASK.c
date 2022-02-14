
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int tsdn_t ;
struct TYPE_2__ {size_t accumbytes; int mtx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t*,size_t*,size_t,int ,int ) ;
 size_t FUNC_1 (size_t*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__ VAR_3 ;

void
FUNC_5(tsdn_t *VAR_4, size_t VAR_5) {
 FUNC_2(VAR_2);






 uint64_t VAR_6, VAR_7;
 FUNC_3(VAR_4, &VAR_3.mtx);
 VAR_6 = VAR_3.accumbytes;
 VAR_7 = (VAR_6 >= VAR_1 - VAR_5)
     ? VAR_6 - (VAR_1 - VAR_5) : 0;
 VAR_3.accumbytes = VAR_7;
 FUNC_4(VAR_4, &VAR_3.mtx);

}
