
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {char* start; char const* eof; } ;
struct ref_store {int dummy; } ;
struct ref_iterator {int * oid; } ;
struct packed_ref_store {int dummy; } ;
struct packed_ref_iterator {char const* pos; char const* eof; unsigned int flags; int oid; struct ref_iterator base; int refname_buf; struct snapshot* snapshot; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snapshot*) ;
 int FUNC_1 (struct ref_iterator*,int *,int) ;
 struct ref_iterator* FUNC_2 () ;
 char* FUNC_3 (struct snapshot*,char const*,int ) ;
 struct snapshot* FUNC_4 (struct packed_ref_store*) ;
 struct packed_ref_store* FUNC_5 (struct ref_store*,unsigned int,char*) ;
 int VAR_3 ;
 struct ref_iterator* FUNC_6 (struct ref_iterator*,char const*,int ) ;
 int FUNC_7 (int *,int ) ;
 struct packed_ref_iterator* FUNC_8 (int,int) ;

__attribute__((used)) static struct ref_iterator *FUNC_9(
  struct ref_store *VAR_4,
  const char *VAR_5, unsigned int VAR_6)
{
 struct packed_ref_store *VAR_7;
 struct snapshot *VAR_8;
 const char *VAR_9;
 struct packed_ref_iterator *VAR_10;
 struct ref_iterator *VAR_11;
 unsigned int VAR_12 = VAR_2;

 if (!(VAR_6 & VAR_0))
  VAR_12 |= VAR_1;
 VAR_7 = FUNC_5(VAR_4, VAR_12, "ref_iterator_begin");






 VAR_8 = FUNC_4(VAR_7);

 if (VAR_5 && *VAR_5)
  VAR_9 = FUNC_3(VAR_8, VAR_5, 0);
 else
  VAR_9 = VAR_8->start;

 if (VAR_9 == VAR_8->eof)
  return FUNC_2();

 VAR_10 = FUNC_8(1, sizeof(*VAR_10));
 VAR_11 = &VAR_10->base;
 FUNC_1(VAR_11, &VAR_3, 1);

 VAR_10->snapshot = VAR_8;
 FUNC_0(VAR_8);

 VAR_10->pos = VAR_9;
 VAR_10->eof = VAR_8->eof;
 FUNC_7(&VAR_10->refname_buf, 0);

 VAR_10->base.oid = &VAR_10->oid;

 VAR_10->flags = VAR_6;

 if (VAR_5 && *VAR_5)

  VAR_11 = FUNC_6(VAR_11, VAR_5, 0);

 return VAR_11;
}
