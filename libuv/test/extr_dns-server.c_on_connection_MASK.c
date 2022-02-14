
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct TYPE_3__ {scalar_t__ prevbuf_rem; scalar_t__ prevbuf_pos; scalar_t__ prevbuf_ptr; } ;
struct TYPE_4__ {TYPE_1__ state; } ;
typedef TYPE_2__ dnshandle ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_3, int VAR_4) {
  dnshandle* VAR_5;
  int VAR_6;

  FUNC_0(VAR_4 == 0);

  VAR_5 = (dnshandle*) FUNC_1(sizeof *VAR_5);
  FUNC_0(VAR_5 != ((void*)0));


  VAR_5->state.prevbuf_ptr = 0;
  VAR_5->state.prevbuf_pos = 0;
  VAR_5->state.prevbuf_rem = 0;

  VAR_6 = FUNC_4(VAR_2, (uv_tcp_t*)VAR_5);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_2(VAR_3, (uv_stream_t*)VAR_5);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_3((uv_stream_t*)VAR_5, VAR_1, VAR_0);
  FUNC_0(VAR_6 == 0);
}
