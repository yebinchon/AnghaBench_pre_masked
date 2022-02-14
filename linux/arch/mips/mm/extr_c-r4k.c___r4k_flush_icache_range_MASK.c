
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_icache_range_args {unsigned long start; unsigned long end; int type; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,struct flush_icache_range_args*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
         bool VAR_8)
{
 struct flush_icache_range_args VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_9.start = VAR_6;
 VAR_9.end = VAR_7;
 VAR_9.type = VAR_0 | VAR_1;
 VAR_9.user = VAR_8;





 FUNC_1();
 if (FUNC_4(VAR_1) && !FUNC_4(VAR_0)) {




  VAR_10 = VAR_7 - VAR_6;
  VAR_11 = VAR_4;
  if (!VAR_2) {
   VAR_10 *= 2;
   VAR_11 += VAR_3;
  }
  if (VAR_10 <= VAR_11)
   VAR_9.type &= ~VAR_1;
 }
 FUNC_3(VAR_9.type, VAR_5, &VAR_9);
 FUNC_2();
 FUNC_0();
}
