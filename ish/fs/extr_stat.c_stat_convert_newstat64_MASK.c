
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int ctime_nsec; int ctime; int mtime_nsec; int mtime; int atime_nsec; int atime; int blocks; int blksize; int size; int rdev; int gid; int uid; int nlink; int mode; int inode; int dev; } ;
struct newstat64 {int ctime_nsec; int ctime; int mtime_nsec; int mtime; int atime_nsec; int atime; int blocks; int blksize; int size; int rdev; int gid; int uid; int nlink; int mode; int ino; int fucked_ino; int dev; } ;



struct newstat64 FUNC_0(struct statbuf VAR_0) {
    struct newstat64 VAR_1;
    VAR_1.dev = VAR_0.dev;
    VAR_1.fucked_ino = VAR_0.inode;
    VAR_1.ino = VAR_0.inode;
    VAR_1.mode = VAR_0.mode;
    VAR_1.nlink = VAR_0.nlink;
    VAR_1.uid = VAR_0.uid;
    VAR_1.gid = VAR_0.gid;
    VAR_1.rdev = VAR_0.rdev;
    VAR_1.size = VAR_0.size;
    VAR_1.blksize = VAR_0.blksize;
    VAR_1.blocks = VAR_0.blocks;
    VAR_1.atime = VAR_0.atime;
    VAR_1.atime_nsec = VAR_0.atime_nsec;
    VAR_1.mtime = VAR_0.mtime;
    VAR_1.mtime_nsec = VAR_0.mtime_nsec;
    VAR_1.ctime = VAR_0.ctime;
    VAR_1.ctime_nsec = VAR_0.ctime_nsec;
    return VAR_1;
}
