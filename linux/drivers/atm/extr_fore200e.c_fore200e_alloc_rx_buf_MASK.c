
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host_bsq {int freebuf_count; struct buffer* freebuf; struct buffer* buffer; } ;
struct fore200e {int state; TYPE_1__* bus; struct host_bsq** host_bsq; } ;
struct buffer {int scheme; int magn; int index; struct buffer* next; int data; scalar_t__ supplied; } ;
struct TYPE_2__ {int buffer_alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct host_bsq*,int,int) ;
 scalar_t__ FUNC_2 (struct fore200e*,int *,int,int ,int ) ;
 int FUNC_3 (struct fore200e*,int *) ;
 int** VAR_6 ;
 int** VAR_7 ;
 struct buffer* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct buffer*) ;

__attribute__((used)) static int FUNC_6(struct fore200e *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    struct host_bsq* VAR_14;
    struct buffer* VAR_15;

    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {

     VAR_14 = &VAR_8->host_bsq[ VAR_9 ][ VAR_10 ];

     VAR_11 = VAR_6[ VAR_9 ][ VAR_10 ];
     VAR_12 = VAR_7[ VAR_9 ][ VAR_10 ];

     FUNC_0(2, "rx buffers %d / %d are being allocated\n", VAR_9, VAR_10);


     VAR_15 = VAR_14->buffer = FUNC_4(VAR_11, sizeof(struct buffer),
                                           VAR_5);

     if (VAR_15 == ((void*)0))
  return -VAR_3;

     VAR_14->freebuf = ((void*)0);

     for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {

  VAR_15[ VAR_13 ].scheme = VAR_9;
  VAR_15[ VAR_13 ].magn = VAR_10;






  if (FUNC_2(VAR_8,
      &VAR_15[ VAR_13 ].data, VAR_12, VAR_8->bus->buffer_alignment,
      VAR_2) < 0) {

      while (VAR_13 > 0)
   FUNC_3(VAR_8, &VAR_15[ --VAR_13 ].data);
      FUNC_5(VAR_15);

      return -VAR_3;
  }


  VAR_15[ VAR_13 ].next = VAR_14->freebuf;
  VAR_14->freebuf = &VAR_15[ VAR_13 ];
     }

     VAR_14->freebuf_count = VAR_11;




 }
    }

    VAR_8->state = VAR_4;
    return 0;
}
