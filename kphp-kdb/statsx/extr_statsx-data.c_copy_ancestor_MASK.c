
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {scalar_t__ meta; int timezone; } ;



__attribute__((used)) static void FUNC_0 (struct counter *VAR_0, struct counter *VAR_1) {
  VAR_0->timezone = VAR_1->timezone;
  VAR_0->meta = VAR_1->meta;
  VAR_1->meta = 0;

}
