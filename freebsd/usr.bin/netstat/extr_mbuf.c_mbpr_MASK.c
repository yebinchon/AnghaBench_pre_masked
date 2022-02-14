
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_long ;
struct sfstat {scalar_t__ sf_allocwait; scalar_t__ sf_allocfail; scalar_t__ sf_busy; scalar_t__ sf_rhpages_read; scalar_t__ sf_rhpages_requested; scalar_t__ sf_pages_bogus; scalar_t__ sf_pages_valid; scalar_t__ sf_pages_read; scalar_t__ sf_iocnt; scalar_t__ sf_noiocnt; scalar_t__ sf_syscalls; } ;
struct memory_type_list {int dummy; } ;
struct memory_type {int dummy; } ;
typedef int sfstat ;
typedef int nsfbufs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,int ,struct sfstat*,int,int ) ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct memory_type*) ;
 int FUNC_3 (struct memory_type*) ;
 int FUNC_4 (struct memory_type*) ;
 int FUNC_5 (struct memory_type*) ;
 int FUNC_6 (struct memory_type*) ;
 int FUNC_7 (struct memory_type*) ;
 int FUNC_8 (struct memory_type*) ;
 scalar_t__ FUNC_9 (struct memory_type_list*,void*) ;
 struct memory_type_list* FUNC_10 () ;
 struct memory_type* FUNC_11 (struct memory_type_list*,int ,int ) ;
 int FUNC_12 (struct memory_type_list*) ;
 int FUNC_13 (struct memory_type_list*) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (struct memory_type_list*,int ) ;
 scalar_t__ FUNC_16 (char*,int*,size_t*,int *,int ) ;
 int VAR_12 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int,...) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,int ) ;

void
FUNC_22(void *VAR_13, u_long VAR_14)
{
 struct memory_type_list *VAR_15;
 struct memory_type *VAR_16;
 uintmax_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 uintmax_t VAR_22;
 uintmax_t VAR_23, VAR_24, VAR_25;
 uintmax_t VAR_26, VAR_27, VAR_28;
 uintmax_t VAR_29, VAR_30, VAR_31, VAR_32;
 uintmax_t VAR_33;
 uintmax_t VAR_34;
 uintmax_t VAR_35, VAR_36, VAR_37;
 uintmax_t VAR_38, VAR_39, VAR_40;
 uintmax_t VAR_41, VAR_42, VAR_43;
 uintmax_t VAR_44, VAR_45, VAR_46;
 uintmax_t VAR_47, VAR_48, VAR_49;
 uintmax_t VAR_50, VAR_51, VAR_52;
 uintmax_t VAR_53, VAR_54, VAR_55;
 int VAR_56, VAR_57, VAR_58;
 struct sfstat VAR_59;
 size_t VAR_60;
 int VAR_61;

 VAR_15 = FUNC_10();
 if (VAR_15 == ((void*)0)) {
  FUNC_20("memstat_mtl_alloc");
  return;
 }





 if (VAR_11) {
  if (FUNC_15(VAR_15, 0) < 0) {
   FUNC_21("memstat_sysctl_all: %s",
       FUNC_14(FUNC_13(VAR_15)));
   goto out;
  }
 } else {
  if (FUNC_9(VAR_15, VAR_13) < 0) {
   VAR_61 = FUNC_13(VAR_15);
   if (VAR_61 == VAR_9)
    FUNC_21("memstat_kvm_all: %s",
        FUNC_1(VAR_13));
   else
    FUNC_21("memstat_kvm_all: %s",
        FUNC_14(VAR_61));
   goto out;
  }
 }

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_6);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found", VAR_6);
  goto out;
 }
 VAR_17 = FUNC_3(VAR_16);
 VAR_18 = FUNC_2(VAR_16);
 VAR_19 = FUNC_6(VAR_16);
 VAR_20 = FUNC_5(VAR_16);
 VAR_22 = FUNC_8(VAR_16);
 VAR_21 = FUNC_7(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_7);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found",
      VAR_7);
  goto out;
 }
 VAR_29 = FUNC_3(VAR_16);
 VAR_30 = FUNC_2(VAR_16);
 VAR_31 = FUNC_6(VAR_16);
 VAR_33 = FUNC_8(VAR_16);
 VAR_32 = FUNC_5(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_2);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found",
      VAR_2);
  goto out;
 }
 VAR_23 = FUNC_3(VAR_16);
 VAR_24 = FUNC_4(VAR_16);
 VAR_25 = FUNC_6(VAR_16);
 VAR_26 = FUNC_5(VAR_16);
 VAR_28 = FUNC_8(VAR_16);
 VAR_27 = FUNC_7(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_0, VAR_8);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: malloc type %s not found",
      VAR_8);
  goto out;
 }
 VAR_34 = FUNC_2(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_5);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found",
      VAR_5);
  goto out;
 }
 VAR_35 = FUNC_3(VAR_16);
 VAR_36 = FUNC_4(VAR_16);
 VAR_37 = FUNC_6(VAR_16);
 VAR_38 = FUNC_5(VAR_16);
 VAR_39 = FUNC_8(VAR_16);
 VAR_40 = FUNC_7(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_4);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found",
      VAR_4);
  goto out;
 }
 VAR_41 = FUNC_3(VAR_16);
 VAR_42 = FUNC_4(VAR_16);
 VAR_43 = FUNC_6(VAR_16);
 VAR_44 = FUNC_5(VAR_16);
 VAR_45 = FUNC_8(VAR_16);
 VAR_46 = FUNC_7(VAR_16);

 VAR_16 = FUNC_11(VAR_15, VAR_1, VAR_3);
 if (VAR_16 == ((void*)0)) {
  FUNC_21("memstat_mtl_find: zone %s not found",
      VAR_3);
  goto out;
 }
 VAR_47 = FUNC_3(VAR_16);
 VAR_48 = FUNC_4(VAR_16);
 VAR_49 = FUNC_6(VAR_16);
 VAR_50 = FUNC_5(VAR_16);
 VAR_51 = FUNC_8(VAR_16);
 VAR_52 = FUNC_7(VAR_16);

 FUNC_19("mbuf-statistics");

 FUNC_18("{:mbuf-current/%ju}/{:mbuf-cache/%ju}/{:mbuf-total/%ju} "
     "{N:mbufs in use (current\\/cache\\/total)}\n",
     VAR_17 + VAR_29, VAR_19 + VAR_31,
     VAR_17 + VAR_29 + VAR_19 + VAR_31);

 FUNC_18("{:cluster-current/%ju}/{:cluster-cache/%ju}/"
     "{:cluster-total/%ju}/{:cluster-max/%ju} "
     "{N:mbuf clusters in use (current\\/cache\\/total\\/max)}\n",
     VAR_23 - VAR_31, VAR_25 + VAR_31,
     VAR_23 + VAR_25, VAR_24);

 FUNC_18("{:packet-count/%ju}/{:packet-free/%ju} "
     "{N:mbuf+clusters out of packet secondary zone in use "
     "(current\\/cache)}\n",
     VAR_29, VAR_31);

 FUNC_18("{:jumbo-count/%ju}/{:jumbo-cache/%ju}/{:jumbo-total/%ju}/"
     "{:jumbo-max/%ju} {:jumbo-page-size/%ju}{U:k} {N:(page size)} "
     "{N:jumbo clusters in use (current\\/cache\\/total\\/max)}\n",
     VAR_35, VAR_37, VAR_35 + VAR_37,
     VAR_36, VAR_40 / 1024);

 FUNC_18("{:jumbo9-count/%ju}/{:jumbo9-cache/%ju}/"
     "{:jumbo9-total/%ju}/{:jumbo9-max/%ju} "
     "{N:9k jumbo clusters in use (current\\/cache\\/total\\/max)}\n",
     VAR_41, VAR_43, VAR_41 + VAR_43,
     VAR_42);

 FUNC_18("{:jumbo16-count/%ju}/{:jumbo16-cache/%ju}/"
     "{:jumbo16-total/%ju}/{:jumbo16-limit/%ju} "
     "{N:16k jumbo clusters in use (current\\/cache\\/total\\/max)}\n",
     VAR_47, VAR_49, VAR_47 + VAR_49,
     VAR_48);
 VAR_53 =
     VAR_18 +
     VAR_30 +
     (VAR_29 * VAR_27) +

     ((VAR_23 - VAR_29 - VAR_31) * VAR_27) +
     VAR_34 +
     (VAR_35 * VAR_40) +
     (VAR_41 * VAR_46) +
     (VAR_47 * VAR_52);
 VAR_54 =
     (VAR_19 * VAR_21) +
     (VAR_31 * VAR_21) +
     (VAR_31 * VAR_27) +
     (VAR_25 * VAR_27) +
     (VAR_37 * VAR_40) +
     (VAR_43 * VAR_46) +
     (VAR_49 * VAR_52);






 VAR_55 = VAR_53 + VAR_54;

 FUNC_18("{:bytes-in-use/%ju}{U:K}/{:bytes-in-cache/%ju}{U:K}/"
     "{:bytes-total/%ju}{U:K} "
     "{N:bytes allocated to network (current\\/cache\\/total)}\n",
     VAR_53 / 1024, VAR_54 / 1024, VAR_55 / 1024);

 FUNC_18("{:mbuf-failures/%ju}/{:cluster-failures/%ju}/"
     "{:packet-failures/%ju} {N:requests for mbufs denied "
     "(mbufs\\/clusters\\/mbuf+clusters)}\n",
     VAR_20, VAR_26, VAR_32);
 FUNC_18("{:mbuf-sleeps/%ju}/{:cluster-sleeps/%ju}/{:packet-sleeps/%ju} "
     "{N:requests for mbufs delayed "
     "(mbufs\\/clusters\\/mbuf+clusters)}\n",
     VAR_22, VAR_28, VAR_33);

 FUNC_18("{:jumbop-sleeps/%ju}/{:jumbo9-sleeps/%ju}/"
     "{:jumbo16-sleeps/%ju} {N:/requests for jumbo clusters delayed "
     "(%juk\\/9k\\/16k)}\n",
     VAR_39, VAR_45, VAR_51, VAR_40 / 1024);
 FUNC_18("{:jumbop-failures/%ju}/{:jumbo9-failures/%ju}/"
     "{:jumbo16-failures/%ju} {N:/requests for jumbo clusters denied "
     "(%juk\\/9k\\/16k)}\n",
     VAR_38, VAR_44, VAR_50,
     VAR_40 / 1024);

 VAR_60 = sizeof(VAR_56);
 if (VAR_11 &&
     FUNC_16("kern.ipc.nsfbufs", &VAR_56, &VAR_60, ((void*)0), 0) == 0 &&
     FUNC_16("kern.ipc.nsfbufsused", &VAR_58, &VAR_60,
     ((void*)0), 0) == 0 &&
     FUNC_16("kern.ipc.nsfbufspeak", &VAR_57, &VAR_60,
     ((void*)0), 0) == 0)
  FUNC_18("{:nsfbufs-current/%d}/{:nsfbufs-peak/%d}/"
      "{:nsfbufs/%d} "
      "{N:sfbufs in use (current\\/peak\\/max)}\n",
      VAR_58, VAR_57, VAR_56);

 if (FUNC_0("kern.ipc.sfstat", VAR_14, &VAR_59, sizeof(VAR_59),
     VAR_10) != 0)
  goto out;

        FUNC_18("{:sendfile-syscalls/%ju} {N:sendfile syscalls}\n",
     (uintmax_t)VAR_59.sf_syscalls);
        FUNC_18("{:sendfile-no-io/%ju} "
     "{N:sendfile syscalls completed without I\\/O request}\n",
            (uintmax_t)VAR_59.sf_noiocnt);
 FUNC_18("{:sendfile-io-count/%ju} "
     "{N:requests for I\\/O initiated by sendfile}\n",
     (uintmax_t)VAR_59.sf_iocnt);
        FUNC_18("{:sendfile-pages-sent/%ju} "
     "{N:pages read by sendfile as part of a request}\n",
            (uintmax_t)VAR_59.sf_pages_read);
        FUNC_18("{:sendfile-pages-valid/%ju} "
     "{N:pages were valid at time of a sendfile request}\n",
            (uintmax_t)VAR_59.sf_pages_valid);
        FUNC_18("{:sendfile-pages-bogus/%ju} "
     "{N:pages were valid and substituted to bogus page}\n",
            (uintmax_t)VAR_59.sf_pages_bogus);
        FUNC_18("{:sendfile-requested-readahead/%ju} "
     "{N:pages were requested for read ahead by applications}\n",
            (uintmax_t)VAR_59.sf_rhpages_requested);
        FUNC_18("{:sendfile-readahead/%ju} "
     "{N:pages were read ahead by sendfile}\n",
            (uintmax_t)VAR_59.sf_rhpages_read);
 FUNC_18("{:sendfile-busy-encounters/%ju} "
     "{N:times sendfile encountered an already busy page}\n",
     (uintmax_t)VAR_59.sf_busy);
 FUNC_18("{:sfbufs-alloc-failed/%ju} {N:requests for sfbufs denied}\n",
     (uintmax_t)VAR_59.sf_allocfail);
 FUNC_18("{:sfbufs-alloc-wait/%ju} {N:requests for sfbufs delayed}\n",
     (uintmax_t)VAR_59.sf_allocwait);
out:
 FUNC_17("mbuf-statistics");
 FUNC_12(VAR_15);
}
