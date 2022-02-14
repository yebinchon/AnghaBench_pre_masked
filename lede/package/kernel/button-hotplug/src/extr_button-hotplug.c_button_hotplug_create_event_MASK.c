
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh_event {char const* name; unsigned long seen; char* action; int work; } ;


 int FUNC_0 (char*,char const*,unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*) ;
 scalar_t__ VAR_2 ;
 struct bh_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, unsigned long VAR_4,
  int VAR_5)
{
 struct bh_event *VAR_6;

 FUNC_0("create event, name=%s, seen=%lu, pressed=%d\n",
  VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->name = VAR_3;
 VAR_6->seen = VAR_4;
 VAR_6->action = VAR_5 ? "pressed" : "released";

 FUNC_1(&VAR_6->work, (void *)(void *)VAR_2);
 FUNC_3(&VAR_6->work);

 return 0;
}
