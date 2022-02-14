
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline int FUNC_0 (struct connection *VAR_9) {
  return (((VAR_9->flags & (VAR_3 | VAR_2)) == VAR_3) ? VAR_6 : 0) | (VAR_9->flags & VAR_4 ? VAR_8 : 0) | VAR_7
       | (((VAR_9->flags & (VAR_3 | VAR_0)) == (VAR_3 | VAR_0))
         || ((VAR_9->flags & (VAR_4 | VAR_1)) == (VAR_4 | VAR_1)) ? VAR_5 : 0);
}
