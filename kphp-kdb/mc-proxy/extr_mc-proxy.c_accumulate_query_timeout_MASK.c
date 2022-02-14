
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {double last_query_timeout; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1 (struct connection *VAR_0, double VAR_1) {
  if (VAR_0->last_query_timeout < VAR_1) {
    VAR_0->last_query_timeout = VAR_1;
    FUNC_0 (VAR_1 < 32);
  }
}
