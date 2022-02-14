
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long phys_addr_t ;
struct TYPE_3__ {int esel_next; int esel_max; int esel_first; } ;
struct TYPE_4__ {TYPE_1__ tcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,unsigned long,unsigned long,unsigned long,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static unsigned long FUNC_6(phys_addr_t VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, int VAR_7,
     bool VAR_8)
{
 int VAR_9;
 unsigned long VAR_10 = 0;


 for (VAR_9 = 0; VAR_6 && VAR_9 < VAR_7; VAR_9++) {
  unsigned long VAR_11;

  VAR_11 = FUNC_0(VAR_6, VAR_5, VAR_4);
  if (!VAR_8)
   FUNC_5(VAR_9, VAR_5, VAR_4, VAR_11,
      FUNC_4(VAR_0), 0);

  VAR_6 -= VAR_11;
  VAR_10 += VAR_11;
  VAR_5 += VAR_11;
  VAR_4 += VAR_11;
 }

 if (VAR_8)
  return VAR_10;

 FUNC_2(0, VAR_9, VAR_7);
 VAR_3 = VAR_9;







 return VAR_10;
}
