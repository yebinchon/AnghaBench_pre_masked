
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uni_cell_header {scalar_t__ pti; int vci; int vpi; } ;
struct rx_descriptor {int own; size_t datalen; scalar_t__ c; scalar_t__ byteoff; } ;
struct atm_vcc {int (* push_oam ) (struct atm_vcc*,struct uni_cell_header*) ;} ;
struct TYPE_6__ {unsigned int vlddes; } ;
struct TYPE_5__ {size_t oam_desc_pos; struct rx_descriptor* oam_desc; int wrx_drop_oam; int wrx_oam; TYPE_1__* conn; int * oam_buf; } ;
struct TYPE_4__ {struct atm_vcc* vcc; } ;


 int FUNC_0 (int,char*,unsigned int,int,int,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct atm_vcc*,struct uni_cell_header*) ;

__attribute__((used)) static inline void FUNC_9(void)
{
 unsigned int VAR_7 = FUNC_1(VAR_3)->vlddes;
 struct rx_descriptor VAR_8;
 struct uni_cell_header *VAR_9;
 int VAR_10;
 struct atm_vcc *VAR_11;
 unsigned int VAR_12;

 for ( VAR_12 = 0; VAR_12 < VAR_7; VAR_12++ ) {
  unsigned int VAR_13 = 0;

  do {
   VAR_8 = VAR_6.oam_desc[VAR_6.oam_desc_pos];
   if ( ++VAR_13 == 1000 )
    break;
  } while ( VAR_8.own || !VAR_8.c );
  FUNC_0(VAR_13 == 1, "loop_count = %u, own = %d, c = %d, oam_desc_pos = %u", VAR_13, (int)VAR_8.own, (int)VAR_8.c, VAR_6.oam_desc_pos);

  VAR_9 = (struct uni_cell_header *)&VAR_6.oam_buf[VAR_6.oam_desc_pos * VAR_4];

  if ( VAR_9->pti == VAR_1 || VAR_9->pti == VAR_0 )
   VAR_10 = FUNC_5(VAR_9->vpi, VAR_9->vci);
  else if ( VAR_9->vci == 0x03 || VAR_9->vci == 0x04 )
   VAR_10 = FUNC_4(VAR_9->vpi);
  else
   VAR_10 = -1;

  if ( VAR_10 >= 0 && VAR_6.conn[VAR_10].vcc != ((void*)0) ) {
   VAR_11 = VAR_6.conn[VAR_10].vcc;

   if ( VAR_11->push_oam != ((void*)0) )
    VAR_11->push_oam(VAR_11, VAR_9);
   else
    FUNC_6((unsigned char *)VAR_9);

   VAR_6.wrx_oam++;

   FUNC_2();
  } else
   VAR_6.wrx_drop_oam++;

  VAR_8.byteoff = 0;
  VAR_8.datalen = VAR_4;
  VAR_8.own = 1;
  VAR_8.c = 0;

  VAR_6.oam_desc[VAR_6.oam_desc_pos] = VAR_8;
  if ( ++VAR_6.oam_desc_pos == VAR_5 )
   VAR_6.oam_desc_pos = 0;

  FUNC_3((unsigned long)VAR_9, VAR_2);
  FUNC_7(VAR_3, 0);
 }
}
