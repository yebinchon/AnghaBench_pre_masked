
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv {int dummy; } ;
struct dtv_frontend_properties {int scrambling_sequence_index; int stream_id; } ;


 int FUNC_0 (struct stv*,int ) ;
 int FUNC_1 (struct stv*,int ) ;

__attribute__((used)) static void FUNC_2(struct stv *VAR_0,
        struct dtv_frontend_properties *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->stream_id);
 FUNC_1(VAR_0, VAR_1->scrambling_sequence_index);
}
