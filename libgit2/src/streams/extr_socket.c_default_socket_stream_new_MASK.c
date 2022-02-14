
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_stream ;
struct TYPE_5__ {int free; int close; int read; int write; int connect; int version; } ;
struct TYPE_6__ {int s; TYPE_1__ parent; struct TYPE_6__* port; struct TYPE_6__* host; } ;
typedef TYPE_2__ git_socket_stream ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int,int) ;
 void* FUNC_3 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(
 git_stream **VAR_7,
 const char *VAR_8,
 const char *VAR_9)
{
 git_socket_stream *VAR_10;

 FUNC_1(VAR_7 && VAR_8 && VAR_9);

 VAR_10 = FUNC_2(1, sizeof(git_socket_stream));
 FUNC_0(VAR_10);

 VAR_10->host = FUNC_3(VAR_8);
 FUNC_0(VAR_10->host);

 if (VAR_9) {
  VAR_10->port = FUNC_3(VAR_9);
  FUNC_0(VAR_10->port);
 }

 VAR_10->parent.version = VAR_0;
 VAR_10->parent.connect = VAR_3;
 VAR_10->parent.write = VAR_6;
 VAR_10->parent.read = VAR_5;
 VAR_10->parent.close = VAR_2;
 VAR_10->parent.free = VAR_4;
 VAR_10->s = VAR_1;

 *VAR_7 = (git_stream *) VAR_10;
 return 0;
}
