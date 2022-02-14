
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fetch_raw_data ) (void*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int) ;

__attribute__((used)) inline static void FUNC_1 (void *VAR_3, int VAR_4) {
  VAR_0->fetch_raw_data (VAR_3, VAR_4);
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
}
