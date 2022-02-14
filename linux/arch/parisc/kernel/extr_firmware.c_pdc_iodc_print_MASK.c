
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* layers; } ;
struct TYPE_5__ {TYPE_1__ dp; int spa; scalar_t__ hpa; int iodc_io; } ;
struct TYPE_6__ {TYPE_2__ mem_cons; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned long,int ,int ,int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(const unsigned char *VAR_5, unsigned VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6;) {
  switch(VAR_5[VAR_7]) {
  case '\n':
   VAR_2[VAR_7+0] = '\r';
   VAR_2[VAR_7+1] = '\n';
   VAR_7 += 2;
   goto print;
  default:
   VAR_2[VAR_7] = VAR_5[VAR_7];
   VAR_7++;
   break;
  }
 }

print:
        FUNC_2(&VAR_4, VAR_8);
        FUNC_1(VAR_1->mem_cons.iodc_io,
                    (unsigned long)VAR_1->mem_cons.hpa, VAR_0,
                    VAR_1->mem_cons.spa, FUNC_0(VAR_1->mem_cons.dp.layers),
                    FUNC_0(VAR_3), 0, FUNC_0(VAR_2), VAR_7, 0);
        FUNC_3(&VAR_4, VAR_8);

 return VAR_7;
}
