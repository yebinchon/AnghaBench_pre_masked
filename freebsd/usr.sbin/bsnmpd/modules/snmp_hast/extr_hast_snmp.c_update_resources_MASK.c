
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct nv {int dummy; } ;
struct hast_snmp_resource {unsigned int index; int replication; int status; void* idle_queue; void* done_queue; void* recv_queue; void* send_queue; void* local_queue; int workerpid; void* flush_errors; void* delete_errors; void* write_errors; void* read_errors; void* activemap_updates; void* flushes; void* deletes; void* writes; void* reads; void* dirty; int sourceaddr; int remoteaddr; void* keepdirty; void* extentsize; int localpath; int provname; int role; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct hast_snmp_resource*,int ) ;
 scalar_t__ VAR_2 ;
 struct hast_snmp_resource* FUNC_1 (int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct nv*,struct nv**) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct nv*,char*,char*,int ) ;
 int FUNC_6 (struct nv*,int ,char*) ;
 struct nv* FUNC_7 () ;
 int FUNC_8 (struct nv*) ;
 int FUNC_9 (struct nv*,char*,unsigned int) ;
 int FUNC_10 (struct nv*,char*,unsigned int) ;
 char* FUNC_11 (struct nv*,char*,unsigned int) ;
 void* FUNC_12 (struct nv*,char*,unsigned int) ;
 void* FUNC_13 (struct nv*,char*,unsigned int) ;
 int FUNC_14 (char*,int) ;
 int VAR_5 ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_19(void)
{
 struct hast_snmp_resource *VAR_6;
 struct nv *VAR_7, *VAR_8;
 static uint64_t VAR_9;
 unsigned int VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3();
 if (VAR_9 - VAR_3 < VAR_2)
  return (0);

 VAR_3 = VAR_9;

 FUNC_2();

 VAR_7 = FUNC_7();
 FUNC_6(VAR_7, VAR_0, "cmd");
 FUNC_5(VAR_7, "all", "resource%d", 0);
 VAR_12 = FUNC_4(VAR_7, &VAR_8);
 FUNC_8(VAR_7);
 if (VAR_12 != 0)
  return (-1);

 for (VAR_10 = 0; ; VAR_10++) {
  VAR_11 = FUNC_11(VAR_8, "resource%u", VAR_10);
  if (VAR_11 == ((void*)0))
   break;
  VAR_6 = FUNC_1(1, sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   FUNC_14("Unable to allocate %zu bytes for "
       "resource", sizeof(*VAR_6));
   return (-1);
  }
  VAR_6->index = VAR_10 + 1;
  FUNC_18(VAR_6->name, VAR_11, sizeof(VAR_6->name) - 1);
  VAR_12 = FUNC_9(VAR_8, "error%u", VAR_10);
  if (VAR_12 != 0)
   continue;
  VAR_11 = FUNC_11(VAR_8, "role%u", VAR_10);
  VAR_6->role = VAR_11 != ((void*)0) ? FUNC_16(VAR_11) : VAR_1;
  VAR_11 = FUNC_11(VAR_8, "provname%u", VAR_10);
  if (VAR_11 != ((void*)0))
   FUNC_18(VAR_6->provname, VAR_11, sizeof(VAR_6->provname) - 1);
  VAR_11 = FUNC_11(VAR_8, "localpath%u", VAR_10);
  if (VAR_11 != ((void*)0)) {
   FUNC_18(VAR_6->localpath, VAR_11,
       sizeof(VAR_6->localpath) - 1);
  }
  VAR_6->extentsize = FUNC_12(VAR_8, "extentsize%u", VAR_10);
  VAR_6->keepdirty = FUNC_12(VAR_8, "keepdirty%u", VAR_10);
  VAR_11 = FUNC_11(VAR_8, "remoteaddr%u", VAR_10);
  if (VAR_11 != ((void*)0)) {
   FUNC_18(VAR_6->remoteaddr, VAR_11,
       sizeof(VAR_6->remoteaddr) - 1);
  }
  VAR_11 = FUNC_11(VAR_8, "sourceaddr%u", VAR_10);
  if (VAR_11 != ((void*)0)) {
   FUNC_18(VAR_6->sourceaddr, VAR_11,
       sizeof(VAR_6->sourceaddr) - 1);
  }
  VAR_11 = FUNC_11(VAR_8, "replication%u", VAR_10);
  VAR_6->replication = VAR_11 != ((void*)0) ? FUNC_15(VAR_11) : -1;
  VAR_11 = FUNC_11(VAR_8, "status%u", VAR_10);
  VAR_6->status = VAR_11 != ((void*)0) ? FUNC_17(VAR_11) : -1;
  VAR_6->dirty = FUNC_13(VAR_8, "dirty%u", VAR_10);
  VAR_6->reads = FUNC_13(VAR_8, "stat_read%u", VAR_10);
  VAR_6->writes = FUNC_13(VAR_8, "stat_write%u", VAR_10);
  VAR_6->deletes = FUNC_13(VAR_8, "stat_delete%u", VAR_10);
  VAR_6->flushes = FUNC_13(VAR_8, "stat_flush%u", VAR_10);
  VAR_6->activemap_updates =
      FUNC_13(VAR_8, "stat_activemap_update%u", VAR_10);
  VAR_6->read_errors =
      FUNC_13(VAR_8, "stat_read_error%u", VAR_10);
  VAR_6->write_errors =
      FUNC_13(VAR_8, "stat_write_error%u", VAR_10);
  VAR_6->delete_errors =
      FUNC_13(VAR_8, "stat_delete_error%u", VAR_10);
  VAR_6->flush_errors =
      FUNC_13(VAR_8, "stat_flush_error%u", VAR_10);
  VAR_6->workerpid = FUNC_10(VAR_8, "workerpid%u", VAR_10);
  VAR_6->local_queue =
      FUNC_13(VAR_8, "local_queue_size%u", VAR_10);
  VAR_6->send_queue =
      FUNC_13(VAR_8, "send_queue_size%u", VAR_10);
  VAR_6->recv_queue =
      FUNC_13(VAR_8, "recv_queue_size%u", VAR_10);
  VAR_6->done_queue =
      FUNC_13(VAR_8, "done_queue_size%u", VAR_10);
  VAR_6->idle_queue =
      FUNC_13(VAR_8, "idle_queue_size%u", VAR_10);
  FUNC_0(&VAR_5, VAR_6, VAR_4);
 }
 FUNC_8(VAR_8);
 return (0);
}
