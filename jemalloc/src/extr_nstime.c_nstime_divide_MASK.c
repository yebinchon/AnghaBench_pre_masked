
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int ns; } ;
typedef TYPE_1__ nstime_t ;


 int FUNC_0 (int) ;

uint64_t
FUNC_1(const nstime_t *VAR_0, const nstime_t *VAR_1) {
 FUNC_0(VAR_1->ns != 0);

 return VAR_0->ns / VAR_1->ns;
}
