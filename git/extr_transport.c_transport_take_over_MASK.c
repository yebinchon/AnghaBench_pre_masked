
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int cannot_reuse; int * smart_options; int * vtable; struct git_transport_data* data; } ;
struct git_transport_data {int options; scalar_t__ got_remote_heads; struct child_process* conn; int * fd; } ;
struct child_process {int in; int out; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct git_transport_data* FUNC_1 (int,int) ;

void FUNC_2(struct transport *VAR_1,
    struct child_process *VAR_2)
{
 struct git_transport_data *VAR_3;

 if (!VAR_1->smart_options)
  FUNC_0("taking over transport requires non-NULL "
      "smart_options field.");

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 VAR_3->options = *VAR_1->smart_options;
 VAR_3->conn = VAR_2;
 VAR_3->fd[0] = VAR_3->conn->out;
 VAR_3->fd[1] = VAR_3->conn->in;
 VAR_3->got_remote_heads = 0;
 VAR_1->data = VAR_3;

 VAR_1->vtable = &VAR_0;
 VAR_1->smart_options = &(VAR_3->options);

 VAR_1->cannot_reuse = 1;
}
