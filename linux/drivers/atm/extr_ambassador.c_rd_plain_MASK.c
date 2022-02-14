
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ iobase; int * membase; } ;
typedef TYPE_1__ amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,size_t,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2 (const amb_dev * VAR_2, size_t VAR_3) {



  u32 VAR_4 = FUNC_1 (VAR_2->iobase + VAR_3);

  FUNC_0 (VAR_0|VAR_1, "rd: %08zx -> %08x", VAR_3, VAR_4);
  return VAR_4;
}
